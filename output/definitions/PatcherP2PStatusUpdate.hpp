#ifndef SWAGGER_TYPES_PatcherP2PStatusUpdate_HPP
#define SWAGGER_TYPES_PatcherP2PStatusUpdate_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PatcherP2PStatusUpdate {
    // 
    bool isAllowedByUser;
  };

  void to_json(nlohmann::json& j, const PatcherP2PStatusUpdate& v) {
    j["isAllowedByUser"] = v.isAllowedByUser;
  }

  void from_json(const nlohmann::json& j, PatcherP2PStatusUpdate& v) {
    v.isAllowedByUser = j.at("isAllowedByUser").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PatcherP2PStatusUpdate_HPP
