/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */



import com.facebook.thrift.lite.*;
import com.facebook.thrift.lite.protocol.*;


public class ModuleConstants {
  public static final int myInt = 1337;

  public static final String name = "Mark Zuckerberg";

  public static final List<Map<String,Integer>> states = new ArrayList<Map<String,Integer>>();
  static {
    Map<String,Integer> tmp0 = new HashMap<String,Integer>();
    tmp0.put("San Diego", 3211000);
    tmp0.put("Sacramento", 479600);
    tmp0.put("SF", 837400);

    states.add(tmp0);
    Map<String,Integer> tmp1 = new HashMap<String,Integer>();
    tmp1.put("New York", 8406000);
    tmp1.put("Albany", 98400);

    states.add(tmp1);
  }

  public static final double x = 1;

  public static final double y = (double)1000000;

  public static final double z = 1e+09;

  public static final ModuleLogger instagram = new ModuleLogger(Module.EventType.Internship);
  static {
    instagram.addProperty(Module.Internship_weeks, 12);
    instagram.addProperty(Module.Internship_title, "Software Engineer");
    instagram.addProperty(Module.Internship_employer, ModuleEnum.Company_INSTAGRAM);
  }
  public static final List<ModuleLogger> kRanges = new ArrayList<ModuleLogger>();
  static {
    ModuleLogger tmp2 = new ModuleLogger(Module.EventType.Range);
    tmp2.addProperty(Module.Range_min, 1);
    tmp2.addProperty(Module.Range_max, 2);
    kRanges.add(tmp2);
    ModuleLogger tmp3 = new ModuleLogger(Module.EventType.Range);
    tmp3.addProperty(Module.Range_min, 5);
    tmp3.addProperty(Module.Range_max, 6);
    kRanges.add(tmp3);
  }

  public static final List<ModuleLogger> internList = new ArrayList<ModuleLogger>();
  static {
    ModuleLogger tmp4 = new ModuleLogger(Module.EventType.Internship);
    tmp4.addProperty(Module.Internship_weeks, 12);
    tmp4.addProperty(Module.Internship_title, "Software Engineer");
    tmp4.addProperty(Module.Internship_employer, ModuleEnum.Company_INSTAGRAM);
    internList.add(tmp4);
    ModuleLogger tmp5 = new ModuleLogger(Module.EventType.Internship);
    tmp5.addProperty(Module.Internship_weeks, 10);
    tmp5.addProperty(Module.Internship_title, "Sales Intern");
    tmp5.addProperty(Module.Internship_employer, ModuleEnum.Company_FACEBOOK);
    internList.add(tmp5);
  }

  public static final ModuleLogger pod_0 = new ModuleLogger(Module.EventType.struct1);
  static {
  }
  public static final ModuleLogger pod_1 = new ModuleLogger(Module.EventType.struct1);
  static {
    pod_1.addProperty(Module.struct1_a, 10);
    pod_1.addProperty(Module.struct1_b, "foo");
  }
  public static final ModuleLogger pod_2 = new ModuleLogger(Module.EventType.struct2);
  static {
    pod_2.addProperty(Module.struct2_a, 98);
    pod_2.addProperty(Module.struct2_b, "gaz");
    ModuleLogger tmp6 = new ModuleLogger(Module.EventType.struct1);
    tmp6.addProperty(Module.struct1_a, 12);
    tmp6.addProperty(Module.struct1_b, "bar");
    pod_2.addProperty(Module.struct2_c, tmp6);
    List<Integer> tmp7 = new ArrayList<Integer>();
    tmp7.add(11);
    tmp7.add(22);
    tmp7.add(33);

    pod_2.addProperty(Module.struct2_d, tmp7);
  }
  public static final ModuleLogger pod_3 = new ModuleLogger(Module.EventType.struct3);
  static {
    pod_3.addProperty(Module.struct3_a, "abc");
    pod_3.addProperty(Module.struct3_b, 456);
    ModuleLogger tmp8 = new ModuleLogger(Module.EventType.struct2);
    tmp8.addProperty(Module.struct2_a, 888);
    ModuleLogger tmp9 = new ModuleLogger(Module.EventType.struct1);
    tmp9.addProperty(Module.struct1_b, "gaz");
    tmp8.addProperty(Module.struct2_c, tmp9);
    List<Integer> tmp10 = new ArrayList<Integer>();
    tmp10.add(1);
    tmp10.add(2);
    tmp10.add(3);

    tmp8.addProperty(Module.struct2_d, tmp10);
    pod_3.addProperty(Module.struct3_c, tmp8);
  }
  public static final ModuleLogger u_1_1 = new ModuleLogger(Module.EventType.union1);
  static {
    u_1_1.addProperty(Module.union1_i, 97);
  }
  public static final ModuleLogger u_1_2 = new ModuleLogger(Module.EventType.union1);
  static {
    u_1_2.addProperty(Module.union1_d, 5.6);
  }
  public static final ModuleLogger u_1_3 = new ModuleLogger(Module.EventType.union1);
  static {
  }
  public static final ModuleLogger u_2_1 = new ModuleLogger(Module.EventType.union2);
  static {
    u_2_1.addProperty(Module.union2_i, 51);
  }
  public static final ModuleLogger u_2_2 = new ModuleLogger(Module.EventType.union2);
  static {
    u_2_2.addProperty(Module.union2_d, 6.7);
  }
  public static final ModuleLogger u_2_3 = new ModuleLogger(Module.EventType.union2);
  static {
    ModuleLogger tmp11 = new ModuleLogger(Module.EventType.struct1);
    tmp11.addProperty(Module.struct1_a, 8);
    tmp11.addProperty(Module.struct1_b, "abacabb");
    u_2_3.addProperty(Module.union2_s, tmp11);
  }
  public static final ModuleLogger u_2_4 = new ModuleLogger(Module.EventType.union2);
  static {
    ModuleLogger tmp12 = new ModuleLogger(Module.EventType.union1);
    tmp12.addProperty(Module.union1_i, 43);
    u_2_4.addProperty(Module.union2_u, tmp12);
  }
  public static final ModuleLogger u_2_5 = new ModuleLogger(Module.EventType.union2);
  static {
    ModuleLogger tmp13 = new ModuleLogger(Module.EventType.union1);
    tmp13.addProperty(Module.union1_d, 9.8);
    u_2_5.addProperty(Module.union2_u, tmp13);
  }
  public static final ModuleLogger u_2_6 = new ModuleLogger(Module.EventType.union2);
  static {
    ModuleLogger tmp14 = new ModuleLogger(Module.EventType.union1);
    u_2_6.addProperty(Module.union2_u, tmp14);
  }
  public static final String apostrophe = "'";

  public static final String tripleApostrophe = "'''";

  public static final String quotationMark = "\"";

  public static final String backslash = "\\";

  public static final String escaped_a = "\u0061";

  public static final Map<String,Integer> char2ascii = new HashMap<String,Integer>();
  static {
    char2ascii.put("'", 39);
    char2ascii.put("\"", 34);
    char2ascii.put("\\", 92);
    char2ascii.put("\u0061", 97);
  }

  public static final List<String> escaped_strings = new ArrayList<String>();
  static {
    escaped_strings.add("\u0061");
    escaped_strings.add("\u00ab");
    escaped_strings.add("\u006a");
    escaped_strings.add("\u00a6");
    escaped_strings.add("\u0061yyy");
    escaped_strings.add("\u00abyyy");
    escaped_strings.add("\u006ayyy");
    escaped_strings.add("\u00a6yyy");
    escaped_strings.add("zzz\u0061");
    escaped_strings.add("zzz\u00ab");
    escaped_strings.add("zzz\u006a");
    escaped_strings.add("zzz\u00a6");
    escaped_strings.add("zzz\u0061yyy");
    escaped_strings.add("zzz\u00abyyy");
    escaped_strings.add("zzz\u006ayyy");
    escaped_strings.add("zzz\u00a6yyy");
  }

  public static final boolean false_c = false;

  public static final boolean true_c = true;

  public static final byte zero_byte = (byte)0;

  public static final short zero16 = (short)0;

  public static final int zero32 = 0;

  public static final long zero64 = 0L;

  public static final double zero_dot_zero = 0;

  public static final String empty_string = "";

  public static final List<Integer> empty_int_list = new ArrayList<Integer>();
  static {
  }

  public static final List<String> empty_string_list = new ArrayList<String>();
  static {
  }

  public static final Set<Integer> empty_int_set = new HashSet<Integer>();
  static {
  }

  public static final Set<String> empty_string_set = new HashSet<String>();
  static {
  }

  public static final Map<Integer,Integer> empty_int_int_map = new HashMap<Integer,Integer>();
  static {
  }

  public static final Map<Integer,String> empty_int_string_map = new HashMap<Integer,String>();
  static {
  }

  public static final Map<String,Integer> empty_string_int_map = new HashMap<String,Integer>();
  static {
  }

  public static final Map<String,String> empty_string_string_map = new HashMap<String,String>();
  static {
  }

}
