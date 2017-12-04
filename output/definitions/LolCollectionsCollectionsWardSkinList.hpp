#ifndef SWAGGER_TYPES_LolCollectionsCollectionsWardSkinList_HPP
#define SWAGGER_TYPES_LolCollectionsCollectionsWardSkinList_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsCollectionsWardSkinList {
    // 
    std::vector<int64_t> wardSkinList;
  };

  void to_json(nlohmann::json& j, const LolCollectionsCollectionsWardSkinList& v) {
    j["wardSkinList"] = v.wardSkinList;
  }

  void from_json(const nlohmann::json& j, LolCollectionsCollectionsWardSkinList& v) {
    v.wardSkinList = j.at("wardSkinList").get<std::vector<int64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsCollectionsWardSkinList_HPP
