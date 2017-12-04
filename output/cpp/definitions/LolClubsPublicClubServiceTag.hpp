#ifndef SWAGGER_TYPES_LolClubsPublicClubServiceTag_HPP
#define SWAGGER_TYPES_LolClubsPublicClubServiceTag_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClubsPublicClubServiceTag {
    // 
    std::string tag;
    // 
    std::string name;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubServiceTag& v) {
    j["tag"] = v.tag;
    j["name"] = v.name;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubServiceTag& v) {
    v.tag = j.at("tag").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicClubServiceTag_HPP
