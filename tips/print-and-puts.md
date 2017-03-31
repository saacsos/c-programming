# ข้อแตกต่างระหว่าง Puts กับ Print #
> by [Pangeiei](https://github.com/Pangeiei)

## Print ##
```c
int main()
{
    int x = 3;
    while (x){
        printf("---|");
        x--;
    }
}
```
ผลคือ ` ---|---|---| ` </br>
-   ถ้าไม่ใส่ `\n` จะได้ผลลัพธ์ดังกล่าว

## Puts ##
```c
int main()
{
    int x = 3;
    while (x){
        puts("---|");
        x--;
    }
}
```
-   Puts จะปริ้นเว้นบรรทัดให้ โดยไม่ต้องใส่ `\n` </br>

ผลคือ
```
---|
---|
---|
```
