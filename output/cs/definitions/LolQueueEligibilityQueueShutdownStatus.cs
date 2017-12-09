using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolQueueEligibilityQueueShutdownStatus
    {
        [DataMember(Name = "isDisabled")]
        public bool IsDisabled { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolQueueEligibilityQueueShutdownStatus {\n");
            sb.Append("  IsDisabled: ").Append(IsDisabled).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}