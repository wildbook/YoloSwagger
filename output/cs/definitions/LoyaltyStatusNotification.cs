using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LoyaltyStatusNotification {
    [DataMember(Name = "status")]
    LoyaltyStatus Status {get; set;}

    [DataMember(Name = "rewards")]
    LoyaltyRewards Rewards {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LoyaltyStatusNotification {\n");
      sb.Append("  Status: ").Append(Status).Append("\n");
      sb.Append("  Rewards: ").Append(Rewards).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}