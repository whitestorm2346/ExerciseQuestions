class DICT():
    dict = {}

    def __init__(self):
        self.dict = {}

    def add(self):
        key = str(input("輸入鍵: "))
        value = str(input("輸入值: "))
        self.dict[key] = value
        print('產生一Dict元素...{"' + key + '": "' + value + '"}')

    def delete(self):
        key = str(input("輸入鍵: "))
        key_list = self.dict.keys()

        if key not in key_list:
            print("{0} 不存在".format(key))
        else:
            print("{" + f"{key}: '{self.dict[key]}'" + "} 已被刪除")
            self.dict.pop(key)

    def print(self):
        key_list = self.dict.keys()
        print("Dict所有鍵值：")

        for key in key_list:
            print("{0} {1}".format(key, self.dict[key]))

    def save(self):
        isOpen = False

        while not isOpen:
            fname = str(input("請輸入要儲存的檔名："))

            if fname.endswith(".txt"):
                with open(fname, 'w') as file:
                    file.truncate()
                    isOpen = True
                    key_list = self.dict.keys()

                    for key in key_list:
                        file.write("{0} {1}\n".format(key, self.dict[key]))

                    print("儲存到 '{0}' 完成".format(fname))
            else:
                print(f"[Errno 2] No such file or directory: '{fname}' {fname} 無法儲存")

    def load(self):
        isOpen = False

        while not isOpen:
            fname = str(input("請輸入要讀取的檔名："))

            if fname.endswith(".txt"):
                with open(fname, 'r') as file:
                    isOpen = True

                    for line in file:
                        words = [i for i in line.split(' ')]
                        self.dict[words[0]] = words[1]

                    print("讀取 '{0}' 完成".format(fname))

            if not isOpen:
                print(f"[Errno 2] No such file or directory: '{fname}' {fname} 無法儲存")

    def option(self):
        print("Dict運作選單:")
        print("1.加入 2.刪除 3.顯示 4.儲存 5.讀取 6.結束")

        isCorrect = False

        while not isCorrect:
            num = input("請輸入選項1~6: ")

            try:
                num = int(num)
            except ValueError:
                print("輸入不是整數！")
                continue

            if num >= 1 and num <= 6:
                return num
            else:
                print("無效的選項，請輸入1~6")
                continue