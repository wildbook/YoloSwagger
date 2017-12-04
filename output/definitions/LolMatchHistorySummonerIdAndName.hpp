#ifndef SWAGGER_TYPES_LolMatchHistorySummonerIdAndName_HPP
#define SWAGGER_TYPES_LolMatchHistorySummonerIdAndName_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistorySummonerIdAndName {
    // 
    std::string displayName;
  };

  void to_json(nlohmann::json& j, const LolMatchHistorySummonerIdAndName& v) {
    j["displayName"] = v.displayName;
  }

  void from_json(const nlohmann::json& j, LolMatchHistorySummonerIdAndName& v) {
    v.displayName = j.at("displayName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistorySummonerIdAndName_HPP
