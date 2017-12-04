#ifndef SWAGGER_TYPES_RecofrienderContactPaginationResource_HPP
#define SWAGGER_TYPES_RecofrienderContactPaginationResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RecofrienderContactPaginationResource {
    // 
    uint64_t cached;
    // 
    uint64_t count;
    // 
    uint64_t limit;
    // 
    bool more;
    // 
    uint64_t start;
    // 
    uint64_t total;
  };

  void to_json(nlohmann::json& j, const RecofrienderContactPaginationResource& v) {
    j["cached"] = v.cached;
    j["count"] = v.count;
    j["limit"] = v.limit;
    j["more"] = v.more;
    j["start"] = v.start;
    j["total"] = v.total;
  }

  void from_json(const nlohmann::json& j, RecofrienderContactPaginationResource& v) {
    v.cached = j.at("cached").get<uint64_t>;
    v.count = j.at("count").get<uint64_t>;
    v.limit = j.at("limit").get<uint64_t>;
    v.more = j.at("more").get<bool>;
    v.start = j.at("start").get<uint64_t>;
    v.total = j.at("total").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderContactPaginationResource_HPP
