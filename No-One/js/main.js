var index=1;
changeImage=function changeImage(){
    var imgs=["Picture/4e0NposUmzABTZkhpvY16042d7c482faa_compress.jpg","Picture/vL7RZoYVpfulArJFF0Ue6045ce1d6888b_compress.jpg","Picture/m33gfWqG0Wd8FHqeBy8J6041fb7dec6f1_compress.jpg","Picture/M0uZzcsNb4sWdXt3Ffxq6045a6142fd10_compress.jpg","Picture/wfE9wHryH6Qm23wv9Au96049f629572ce_compress.jpg"]
    document.getElementById('anh').src=imgs[index]
    index++;
    if(index==5){
        index=0;
    }
}
setInterval(changeImage,2000);