#ifndef SWAGGER_TYPES_LolChatChatDomainConfig_HPP
#define SWAGGER_TYPES_LolChatChatDomainConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatChatDomainConfig {
    // 
    std::string CustomGameDomainName;
    // 
    std::string PostGameDomainName;
    // 
    std::string ChampSelectDomainName;
    // 
    std::string PublicDomainName;
    // 
    std::string TeamBuilderDomainName;
    // 
    std::string CustomTeamDomainName;
    // 
    std::string PrivateDomainName;
    // 
    std::string RankedTeamDomainName;
    // 
    std::string P2PDomainName;
    // 
    std::string ClubDomainName;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatDomainConfig& v) {
    j["CustomGameDomainName"] = v.CustomGameDomainName;
    j["PostGameDomainName"] = v.PostGameDomainName;
    j["ChampSelectDomainName"] = v.ChampSelectDomainName;
    j["PublicDomainName"] = v.PublicDomainName;
    j["TeamBuilderDomainName"] = v.TeamBuilderDomainName;
    j["CustomTeamDomainName"] = v.CustomTeamDomainName;
    j["PrivateDomainName"] = v.PrivateDomainName;
    j["RankedTeamDomainName"] = v.RankedTeamDomainName;
    j["P2PDomainName"] = v.P2PDomainName;
    j["ClubDomainName"] = v.ClubDomainName;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatDomainConfig& v) {
    v.CustomGameDomainName = j.at("CustomGameDomainName").get<std::string>;
    v.PostGameDomainName = j.at("PostGameDomainName").get<std::string>;
    v.ChampSelectDomainName = j.at("ChampSelectDomainName").get<std::string>;
    v.PublicDomainName = j.at("PublicDomainName").get<std::string>;
    v.TeamBuilderDomainName = j.at("TeamBuilderDomainName").get<std::string>;
    v.CustomTeamDomainName = j.at("CustomTeamDomainName").get<std::string>;
    v.PrivateDomainName = j.at("PrivateDomainName").get<std::string>;
    v.RankedTeamDomainName = j.at("RankedTeamDomainName").get<std::string>;
    v.P2PDomainName = j.at("P2PDomainName").get<std::string>;
    v.ClubDomainName = j.at("ClubDomainName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatChatDomainConfig_HPP
