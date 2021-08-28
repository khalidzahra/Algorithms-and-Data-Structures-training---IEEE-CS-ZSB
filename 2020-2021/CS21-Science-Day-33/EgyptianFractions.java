public class EgyptianFractions {

  public static void main(String[] args) {
    System.out.println(decompose("3", "4"));
  }

  public static String decompose(String nrStr, String drStr) {
    return "[" + solve(Integer.valueOf(nrStr), Integer.valueOf(drStr)) + "]";
  }

  private static String solve(int nr, int dr) {

    if (nr == 0) {
      return "";
    }

    String result = "";

    if (nr == 1) {
      return nr + "/" + dr;
    } else if (dr == 1) {
      return nr + "";
    } else if (nr%dr == 0) {
      return nr / dr + "";
    }


    if (nr > dr) {
      result += nr / dr + ", " + solve(nr % dr, dr);
      return result;
    }

    if (dr % nr == 0) {
      System.out.println("1/" + (dr / nr));
      return "1/" + (dr / nr);
    }

    int smallest = dr / nr + 1;

    result += "1/"+smallest + ", " + solve(nr*smallest - dr, dr*smallest);

    return result;
  }

}