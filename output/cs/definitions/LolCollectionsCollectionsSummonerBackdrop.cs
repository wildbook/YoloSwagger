using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolCollectionsCollectionsSummonerBackdrop
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "backdropImage")]
        public string BackdropImage { get; set; }

        [DataMember(Name = "backdropMaskColor")]
        public string BackdropMaskColor { get; set; }

        [DataMember(Name = "backdropType")]
        public LolCollectionsCollectionsSummonerBackdropType BackdropType { get; set; }

        [DataMember(Name = "backdropVideo")]
        public string BackdropVideo { get; set; }

        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "profileIconId")]
        public int ProfileIconId { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsCollectionsSummonerBackdrop {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  BackdropImage: ").Append(BackdropImage).Append("\n");
            sb.Append("  BackdropMaskColor: ").Append(BackdropMaskColor).Append("\n");
            sb.Append("  BackdropType: ").Append(BackdropType).Append("\n");
            sb.Append("  BackdropVideo: ").Append(BackdropVideo).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  ProfileIconId: ").Append(ProfileIconId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}