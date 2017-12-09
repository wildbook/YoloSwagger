using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PersonalizedOffersLcdsChampionSkinDTO
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "owned")]
        public bool Owned { get; set; }

        [DataMember(Name = "skinId")]
        public int SkinId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PersonalizedOffersLcdsChampionSkinDTO {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  Owned: ").Append(Owned).Append("\n");
            sb.Append("  SkinId: ").Append(SkinId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}