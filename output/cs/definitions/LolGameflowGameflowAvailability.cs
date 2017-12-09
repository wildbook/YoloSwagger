using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameflowGameflowAvailability
    {
        [DataMember(Name = "isAvailable")]
        public bool IsAvailable { get; set; }

        [DataMember(Name = "state")]
        public LolGameflowGameflowAvailabilityState State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameflowGameflowAvailability {\n");
            sb.Append("  IsAvailable: ").Append(IsAvailable).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}