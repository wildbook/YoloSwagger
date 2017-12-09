using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PatcherHeaderEntry
    {
        [DataMember(Name = "key")]
        public string Key { get; set; }

        [DataMember(Name = "value")]
        public string Value { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherHeaderEntry {\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            sb.Append("  Value: ").Append(Value).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}