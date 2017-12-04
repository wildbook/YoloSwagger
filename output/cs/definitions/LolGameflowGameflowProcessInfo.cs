using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolGameflowGameflowProcessInfo {
    [DataMember(Name = "rawArgs")]
    string[] RawArgs {get; set;}

    [DataMember(Name = "pid")]
    uint Pid {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolGameflowGameflowProcessInfo {\n");
      sb.Append("  RawArgs: ").Append(RawArgs).Append("\n");
      sb.Append("  Pid: ").Append(Pid).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}