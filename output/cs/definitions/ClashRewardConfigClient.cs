using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClashRewardConfigClient
    {
        [DataMember(Name = "entries")]
        public ClashRewardConfigEntry[] Entries { get; set; }

        [DataMember(Name = "grantToSub")]
        public bool GrantToSub { get; set; }

        [DataMember(Name = "keyDef")]
        public ClashRewardKeyType[] KeyDef { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClashRewardConfigClient {\n");
            sb.Append("  Entries: ").Append(Entries).Append("\n");
            sb.Append("  GrantToSub: ").Append(GrantToSub).Append("\n");
            sb.Append("  KeyDef: ").Append(KeyDef).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}