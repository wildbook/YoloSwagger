#ifndef SWAGGER_TYPES_LolLeaguesApexLeagues_HPP
#define SWAGGER_TYPES_LolLeaguesApexLeagues_HPP
#include <json.hpp>
#include "LolLeaguesLeague.hpp"
namespace test {
  // 
  struct LolLeaguesApexLeagues {
'    // 
    std::vector<LolLeaguesLeague> challengers;
    // 
    std::vector<LolLeaguesLeague> masters;
  };

  void to_json(nlohmann::json& j, const LolLeaguesApexLeagues& v) {
    j["challengers"] = v.challengers;
    j["masters"] = v.masters;
  }

  void from_json(const nlohmann::json& j, LolLeaguesApexLeagues& v) {
    v.challengers = j.at("challengers").get<std::vector<LolLeaguesLeague>>;
    v.masters = j.at("masters").get<std::vector<LolLeaguesLeague>>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesApexLeagues_HPP
