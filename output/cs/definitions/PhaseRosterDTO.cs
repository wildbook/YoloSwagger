using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PhaseRosterDTO
    {
        [DataMember(Name = "bracketDTO")]
        Bracket? BracketDTO { get; set; }

        [DataMember(Name = "period")]
        int Period { get; set; }

        [DataMember(Name = "phaseId")]
        long PhaseId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PhaseRosterDTO {\n");
            sb.Append("  BracketDTO: ").Append(BracketDTO).Append("\n");
            sb.Append("  Period: ").Append(Period).Append("\n");
            sb.Append("  PhaseId: ").Append(PhaseId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}