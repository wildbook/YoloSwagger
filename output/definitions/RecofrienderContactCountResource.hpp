#ifndef SWAGGER_TYPES_RecofrienderContactCountResource_HPP
#define SWAGGER_TYPES_RecofrienderContactCountResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RecofrienderContactCountResource {
    // 
    uint64_t count;
  };

  void to_json(nlohmann::json& j, const RecofrienderContactCountResource& v) {
    j["count"] = v.count;
  }

  void from_json(const nlohmann::json& j, RecofrienderContactCountResource& v) {
    v.count = j.at("count").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderContactCountResource_HPP
