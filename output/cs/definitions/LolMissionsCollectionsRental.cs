using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMissionsCollectionsRental
    {
        [DataMember(Name = "rented")]
        bool Rented { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMissionsCollectionsRental {\n");
            sb.Append("  Rented: ").Append(Rented).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}