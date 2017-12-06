using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderTeamBoost
    {
        [DataMember(Name = "availableSkins")]
        long[] AvailableSkins { get; set; }

        [DataMember(Name = "ipReward")]
        long IpReward { get; set; }

        [DataMember(Name = "ipRewardForPurchaser")]
        long IpRewardForPurchaser { get; set; }

        [DataMember(Name = "price")]
        long Price { get; set; }

        [DataMember(Name = "skinUnlockMode")]
        string SkinUnlockMode { get; set; }

        [DataMember(Name = "summonerName")]
        string SummonerName { get; set; }

        [DataMember(Name = "unlocked")]
        bool Unlocked { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderTeamBoost {\n");
            sb.Append("  AvailableSkins: ").Append(AvailableSkins).Append("\n");
            sb.Append("  IpReward: ").Append(IpReward).Append("\n");
            sb.Append("  IpRewardForPurchaser: ").Append(IpRewardForPurchaser).Append("\n");
            sb.Append("  Price: ").Append(Price).Append("\n");
            sb.Append("  SkinUnlockMode: ").Append(SkinUnlockMode).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("  Unlocked: ").Append(Unlocked).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}