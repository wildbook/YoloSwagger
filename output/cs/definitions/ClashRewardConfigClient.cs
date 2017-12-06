using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ClashRewardConfigClient
    {
        [DataMember(Name = "entries")]
        ClashRewardConfigEntry[] Entries { get; set; }

        [DataMember(Name = "grantToSub")]
        bool GrantToSub { get; set; }

        [DataMember(Name = "keyDef")]
        ClashRewardKeyType[] KeyDef { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

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