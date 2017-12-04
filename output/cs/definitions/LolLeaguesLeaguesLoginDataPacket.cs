using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLeaguesLeaguesLoginDataPacket {
    [DataMember(Name = "simpleMessages")]
    LolLeaguesSimpleMessage[] SimpleMessages {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLeaguesLeaguesLoginDataPacket {\n");
      sb.Append("  SimpleMessages: ").Append(SimpleMessages).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}