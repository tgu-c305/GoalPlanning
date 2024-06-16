



def int16_to_hex_string_little_endian(int_value):  
    # 转换为16进制字符串，并去掉'0x'前缀和空格  
    hex_str = hex(int_value & 0xFFFF)[2:].zfill(4)  # 使用位与操作确保总是16位  
    # 反转字节顺序（小端模式）  
    hex_little_endian = hex_str[2:] + hex_str[0:2]  
    return hex_little_endian  