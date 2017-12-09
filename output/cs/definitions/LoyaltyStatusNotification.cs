using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LoyaltyStatusNotification
    {
        [DataMember(Name = "rewards")]
        public LoyaltyRewards Rewards { get; set; }

        [DataMember(Name = "status")]
        public LoyaltyStatus Status { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LoyaltyStatusNotification {\n");
            sb.Append("  Rewards: ").Append(Rewards).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}