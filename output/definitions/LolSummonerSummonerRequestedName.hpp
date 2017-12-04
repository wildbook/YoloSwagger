#ifndef SWAGGER_TYPES_LolSummonerSummonerRequestedName_HPP
#define SWAGGER_TYPES_LolSummonerSummonerRequestedName_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolSummonerSummonerRequestedName {
'    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const LolSummonerSummonerRequestedName& v) {
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, LolSummonerSummonerRequestedName& v) {
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerSummonerRequestedName_HPP
