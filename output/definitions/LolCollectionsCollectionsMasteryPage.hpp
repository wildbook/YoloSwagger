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
    uint32_t id;
    // 
    std::vector<LolCollectionsCollectionsMastery> masteries;
    // 
    std::string name;
    // 
    std::map<std::string, uint32_t> summary;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsMasteryPage& v) {
    j["current"] = v.current;
    j["id"] = v.id;
    j["masteries"] = v.masteries;
    j["name"] = v.name;
    j["summary"] = v.summary;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsMasteryPage& v) {
    v.current = j.at("current").get<bool>;
    v.id = j.at("id").get<uint32_t>;
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsMastery>>;
    v.name = j.at("name").get<std::string>;
    v.summary = j.at("summary").get<std::map<std::string, uint32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsMasteryPage_HPP
