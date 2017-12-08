using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PersonalizedOffersLcdsChampionSkinDTO
    {
        [DataMember(Name = "skinId")]
        int SkinId { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "owned")]
        bool Owned { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PersonalizedOffersLcdsChampionSkinDTO {\n");
            sb.Append("  SkinId: ").Append(SkinId).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  Owned: ").Append(Owned).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}