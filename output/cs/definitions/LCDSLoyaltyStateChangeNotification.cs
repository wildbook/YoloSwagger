using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LCDSLoyaltyStateChangeNotification {
    [DataMember(Name = "rewards")]
    LCDSLoyaltyRewards Rewards {get; set;}

    [DataMember(Name = "notificationCategory")]
    LCDSLoyaltyStateChangeNotificationCategory NotificationCategory {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LCDSLoyaltyStateChangeNotification {\n");
      sb.Append("  Rewards: ").Append(Rewards).Append("\n");
      sb.Append("  NotificationCategory: ").Append(NotificationCategory).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}