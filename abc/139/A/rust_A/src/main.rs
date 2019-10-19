fn main() {
    let mut s = String::new();
    let mut t = String::new();
    std::io::stdin().read_line(&mut s).unwrap();
    std::io::stdin().read_line(&mut t).unwrap();

    let s = s.trim().chars();
    let mut t = t.trim().chars();

    let mut cnt = 0;

    for i in s{
        let tmps = i;
        let tmpt = t.next().unwrap();
        if tmps == tmpt{
            cnt += 1;
        }
    }
    println!("{}", cnt);
}
