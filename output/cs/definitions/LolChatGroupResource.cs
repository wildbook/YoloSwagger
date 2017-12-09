using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatGroupResource
    {
        [DataMember(Name = "collapsed")]
        public bool Collapsed { get; set; }

        [DataMember(Name = "id")]
        public uint Id { get; set; }

        [DataMember(Name = "isMetaGroup")]
        public bool IsMetaGroup { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "priority")]
        public int Priority { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatGroupResource {\n");
            sb.Append("  Collapsed: ").Append(Collapsed).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsMetaGroup: ").Append(IsMetaGroup).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Priority: ").Append(Priority).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}