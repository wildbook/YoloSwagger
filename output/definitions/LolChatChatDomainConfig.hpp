#ifndef SWAGGER_TYPES_LolChatChatDomainConfig_HPP
#define SWAGGER_TYPES_LolChatChatDomainConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatChatDomainConfig {
    // 
    std::string ChampSelectDomainName;
    // 
    std::string ClubDomainName;
    // 
    std::string CustomGameDomainName;
    // 
    std::string CustomTeamDomainName;
    // 
    std::string P2PDomainName;
    // 
    std::string PostGameDomainName;
    // 
    std::string PrivateDomainName;
    // 
    std::string PublicDomainName;
    // 
    std::string RankedTeamDomainName;
    // 
    std::string TeamBuilderDomainName;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatDomainConfig& v) {
    j["ChampSelectDomainName"] = v.ChampSelectDomainName;
    j["ClubDomainName"] = v.ClubDomainName;
    j["CustomGameDomainName"] = v.CustomGameDomainName;
    j["CustomTeamDomainName"] = v.CustomTeamDomainName;
    j["P2PDomainName"] = v.P2PDomainName;
    j["PostGameDomainName"] = v.PostGameDomainName;
    j["PrivateDomainName"] = v.PrivateDomainName;
    j["PublicDomainName"] = v.PublicDomainName;
    j["RankedTeamDomainName"] = v.RankedTeamDomainName;
    j["TeamBuilderDomainName"] = v.TeamBuilderDomainName;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatDomainConfig& v) {
    v.ChampSelectDomainName = j.at("ChampSelectDomainName").get<std::string>;
    v.ClubDomainName = j.at("ClubDomainName").get<std::string>;
    v.CustomGameDomainName = j.at("CustomGameDomainName").get<std::string>;
    v.CustomTeamDomainName = j.at("CustomTeamDomainName").get<std::string>;
    v.P2PDomainName = j.at("P2PDomainName").get<std::string>;
    v.PostGameDomainName = j.at("PostGameDomainName").get<std::string>;
    v.PrivateDomainName = j.at("PrivateDomainName").get<std::string>;
    v.PublicDomainName = j.at("PublicDomainName").get<std::string>;
    v.RankedTeamDomainName = j.at("RankedTeamDomainName").get<std::string>;
    v.TeamBuilderDomainName = j.at("TeamBuilderDomainName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolChatChatDomainConfig_HPP
