#ifndef SWAGGER_TYPES_PublicRosterDTO_HPP
#define SWAGGER_TYPES_PublicRosterDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PublicRosterDTO {
    // 
    std::string name;
    // 
    int32_t logoColor;
    // 
    std::vector<uint64_t> memberIds;
    // 
    int32_t logo;
    // 
    std::string shortName;
    // 
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const PublicRosterDTO& v) {
    j["name"] = v.name;
    j["logoColor"] = v.logoColor;
    j["memberIds"] = v.memberIds;
    j["logo"] = v.logo;
    j["shortName"] = v.shortName;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, PublicRosterDTO& v) {
    v.name = j.at("name").get<std::string>;
    v.logoColor = j.at("logoColor").get<int32_t>;
    v.memberIds = j.at("memberIds").get<std::vector<uint64_t>>;
    v.logo = j.at("logo").get<int32_t>;
    v.shortName = j.at("shortName").get<std::string>;
    v.id = j.at("id").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_PublicRosterDTO_HPP
