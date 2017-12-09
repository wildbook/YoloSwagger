using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPreEndOfGameSequenceEvent
    {
        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "priority")]
        public int Priority { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPreEndOfGameSequenceEvent {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Priority: ").Append(Priority).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}