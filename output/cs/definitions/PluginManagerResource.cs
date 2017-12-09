using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PluginManagerResource
    {
        [DataMember(Name = "state")]
        public PluginManagerState State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PluginManagerResource {\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}