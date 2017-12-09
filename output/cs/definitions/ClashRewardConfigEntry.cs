using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClashRewardConfigEntry
    {
        [DataMember(Name = "key")]
        public string Key { get; set; }

        [DataMember(Name = "vals")]
        public ClashRewardOutput[] Vals { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClashRewardConfigEntry {\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            sb.Append("  Vals: ").Append(Vals).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}