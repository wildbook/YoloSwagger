using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampSelectLegacyCollectionsRental
    {
        [DataMember(Name = "rented")]
        public bool Rented { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampSelectLegacyCollectionsRental {\n");
            sb.Append("  Rented: ").Append(Rented).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}