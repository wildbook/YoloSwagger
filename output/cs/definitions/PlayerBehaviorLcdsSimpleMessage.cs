using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PlayerBehaviorLcdsSimpleMessage {
    [DataMember(Name = "msgId")]
    string MsgId {get; set;}

    [DataMember(Name = "type")]
    string Type {get; set;}

    [DataMember(Name = "params")]
    string[] Params {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PlayerBehaviorLcdsSimpleMessage {\n");
      sb.Append("  MsgId: ").Append(MsgId).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Params: ").Append(Params).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}