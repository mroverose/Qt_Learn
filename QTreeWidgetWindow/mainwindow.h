#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidgetItem>
#include <QTreeWidget>
#include <QLabel>
#include <QSpinBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    enum        TreeItemType{itTopItem = 1001,itGroupItem,itImageItem};
    enum        TreeColNum{colItem = 0,colItemType,colDate};
    QLabel      *labFileName;
    QLabel      *labNodeText;        //状态栏显示
    QSpinBox    *spinRatio;       //状态栏显示
    QPixmap      m_pixmap;    //当前的图片
    float         m_ratio;       //当前图片缩放比例
    void        buildTreeHeader();    //构建目录树表头
    void        iniTree();
    void        addFolderItem(QTreeWidgetItem *parItem,QString dirName);  //添目录节点
    QString     getFinalFolderName(const QString &fullPathName);       //提取目录名称
    void        addImageItem(QTreeWidgetItem *parItem,QString aFileName);       //添加图片节点
    void        displayImage(QTreeWidgetItem *item);                           //添加一个图片节点关联的图片
    void        changeItemCaption(QTreeWidgetItem  *item);                  //遍历改变节点标题
    void        deleteItem(QTreeWidgetItem   *parItem,QTreeWidgetItem  *item);     //删除一个节点
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_treeWidget_itemChanged(QTreeWidgetItem *item, int column);

    void on_treeWidget_itemSelectionChanged();

    void on_actionAddFolder_triggered();

    void on_actionAddFiles_triggered();

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_actionDeleteItem_triggered();

    void on_actionScanItems_triggered();

    void on_actionZoomFitHeight_triggered();

    void on_actionZoomOut_triggered();

    void on_actionZoomIn_triggered();

    void on_actionZoomRealSize_triggered();

    void on_dockWidget_visibilityChanged(bool visible);

    void on_dockWidget_topLevelChanged(bool topLevel);

    void on_actionDockFloat_triggered(bool checked);

    void on_actionDockVisible_triggered(bool checked);


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
