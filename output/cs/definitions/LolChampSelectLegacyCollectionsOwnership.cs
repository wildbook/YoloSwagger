using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampSelectLegacyCollectionsOwnership
    {
        [DataMember(Name = "freeToPlayReward")]
        public bool FreeToPlayReward { get; set; }

        [DataMember(Name = "owned")]
        public bool Owned { get; set; }

        [DataMember(Name = "rental")]
        public LolChampSelectLegacyCollectionsRental Rental { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampSelectLegacyCollectionsOwnership {\n");
            sb.Append("  FreeToPlayReward: ").Append(FreeToPlayReward).Append("\n");
            sb.Append("  Owned: ").Append(Owned).Append("\n");
            sb.Append("  Rental: ").Append(Rental).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}