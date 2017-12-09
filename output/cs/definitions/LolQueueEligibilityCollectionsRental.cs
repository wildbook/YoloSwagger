using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolQueueEligibilityCollectionsRental
    {
        [DataMember(Name = "rented")]
        public bool Rented { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolQueueEligibilityCollectionsRental {\n");
            sb.Append("  Rented: ").Append(Rented).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}