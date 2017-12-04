#ifndef SWAGGER_TYPES_LolCollectionsCollectionsMasteryPage_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsMasteryPage_HPP
#include <json.hpp>
#include "LolCollectionsCollectionsMastery.hpp"
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsMasteryPage {
    // 
    bool current;
    // 
    std::vector<LolCollectionsCollectionsMastery> masteries;
    // 
    std::map<std::string, uint32_t> summary;
    // 
    uint32_t id;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsMasteryPage& v) {
    j["current"] = v.current;
    j["masteries"] = v.masteries;
    j["summary"] = v.summary;
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsMasteryPage& v) {
    v.current = j.at("current").get<bool>;
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsMastery>>;
    v.summary = j.at("summary").get<std::map<std::string, uint32_t>>;
    v.id = j.at("id").get<uint32_t>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsMasteryPage_HPP
