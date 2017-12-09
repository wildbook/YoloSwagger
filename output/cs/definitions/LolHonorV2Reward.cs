using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolHonorV2Reward
    {
        [DataMember(Name = "message")]
        public string Message { get; set; }

        [DataMember(Name = "quantity")]
        public int Quantity { get; set; }

        [DataMember(Name = "rewardType")]
        public string RewardType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2Reward {\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("  RewardType: ").Append(RewardType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}