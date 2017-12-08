using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashGameflowAvailability
    {
        [DataMember(Name = "isAvailable")]
        bool IsAvailable { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashGameflowAvailability {\n");
            sb.Append("  IsAvailable: ").Append(IsAvailable).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}