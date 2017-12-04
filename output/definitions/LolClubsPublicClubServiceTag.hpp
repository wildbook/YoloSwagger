#ifndef SWAGGER_TYPES_LolClubsPublicClubServiceTag_HPP
#define SWAGGER_TYPES_LolClubsPublicClubServiceTag_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolClubsPublicClubServiceTag {
'    // 
    std::string name;
    // 
    uint64_t summonerId;
    // 
    std::string tag;
  };

  void to_json(nlohmann::json& j, const LolClubsPublicClubServiceTag& v) {
    j["name"] = v.name;
    j["summonerId"] = v.summonerId;
    j["tag"] = v.tag;
  }

  void from_json(const nlohmann::json& j, LolClubsPublicClubServiceTag& v) {
    v.name = j.at("name").get<std::string>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.tag = j.at("tag").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClubsPublicClubServiceTag_HPP
