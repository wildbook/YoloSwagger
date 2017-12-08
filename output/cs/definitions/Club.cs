using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct Club
    {
        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "key")]
        string Key { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Club {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}