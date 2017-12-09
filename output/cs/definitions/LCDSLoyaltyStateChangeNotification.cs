using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LCDSLoyaltyStateChangeNotification
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "notificationCategory")]
        public LCDSLoyaltyStateChangeNotificationCategory NotificationCategory { get; set; }

        [DataMember(Name = "rewards")]
        public LCDSLoyaltyRewards Rewards { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LCDSLoyaltyStateChangeNotification {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  NotificationCategory: ").Append(NotificationCategory).Append("\n");
            sb.Append("  Rewards: ").Append(Rewards).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}