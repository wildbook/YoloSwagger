using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPersonalizedOffersUIOffer
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "discountPrice")]
        public long DiscountPrice { get; set; }

        [DataMember(Name = "expirationDate")]
        public string ExpirationDate { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "originalPrice")]
        public long OriginalPrice { get; set; }

        [DataMember(Name = "owned")]
        public bool Owned { get; set; }

        [DataMember(Name = "revealed")]
        public bool Revealed { get; set; }

        [DataMember(Name = "skinId")]
        public int SkinId { get; set; }

        [DataMember(Name = "skinName")]
        public string SkinName { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPersonalizedOffersUIOffer {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  DiscountPrice: ").Append(DiscountPrice).Append("\n");
            sb.Append("  ExpirationDate: ").Append(ExpirationDate).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  OriginalPrice: ").Append(OriginalPrice).Append("\n");
            sb.Append("  Owned: ").Append(Owned).Append("\n");
            sb.Append("  Revealed: ").Append(Revealed).Append("\n");
            sb.Append("  SkinId: ").Append(SkinId).Append("\n");
            sb.Append("  SkinName: ").Append(SkinName).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}