#pragma once
#include <json.hpp>
#include <optional>
#include "FailedInvite.hpp"
#include "PendingRosterInviteeDTO.hpp"
#include "TicketOfferDTO.hpp"
#include "PendingRosterMemberDTO.hpp"
namespace leagueapi {
  struct PendingRosterDTO_t {
    int32_t logoColor;
    int64_t tournamentId;
    std::string invitationId;
    std::vector<PendingRosterMemberDTO_t> members;
    std::vector<FailedInvite_t> inviteFaileds;
    uint64_t captainId;
    std::string shortName;
    std::vector<PendingRosterInviteeDTO_t> invitees;
    std::string name;
    std::vector<TicketOfferDTO_t> ticketOffers;
    int32_t logo;
    int32_t tier;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterDTO_t& v) {
    j["logoColor"] = v.logoColor;
    j["tournamentId"] = v.tournamentId;
    j["invitationId"] = v.invitationId;
    j["members"] = v.members;
    j["inviteFaileds"] = v.inviteFaileds;
    j["captainId"] = v.captainId;
    j["shortName"] = v.shortName;
    j["invitees"] = v.invitees;
    j["name"] = v.name;
    j["ticketOffers"] = v.ticketOffers;
    j["logo"] = v.logo;
    j["tier"] = v.tier;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterDTO_t& v) {
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.invitationId = j.at("invitationId").get<std::string>();
    v.members = j.at("members").get<std::vector<PendingRosterMemberDTO_t>>();
    v.inviteFaileds = j.at("inviteFaileds").get<std::vector<FailedInvite_t>>();
    v.captainId = j.at("captainId").get<uint64_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.invitees = j.at("invitees").get<std::vector<PendingRosterInviteeDTO_t>>();
    v.name = j.at("name").get<std::string>();
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO_t>>();
    v.logo = j.at("logo").get<int32_t>();
    v.tier = j.at("tier").get<int32_t>();
  }
}
