#ifndef SWAGGER_TYPES_LolCollectionsCollectionsSummonerIcons_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsSummonerIcons_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolCollectionsCollectionsSummonerIcons {
'    // 
    std::vector<int32_t> icons;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerIcons& v) {
    j["icons"] = v.icons;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerIcons& v) {
    v.icons = j.at("icons").get<std::vector<int32_t>>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsSummonerIcons_HPP
