using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolKrShutdownLawQueueShutdownStatus
    {
        [DataMember(Name = "isDisabled")]
        public bool IsDisabled { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolKrShutdownLawQueueShutdownStatus {\n");
            sb.Append("  IsDisabled: ").Append(IsDisabled).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}